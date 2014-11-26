#include <node.h>
#include <v8.h>
#include "myage_c.h"

using namespace v8;

Handle<Value> myAgeMethod(const Arguments& args) {
  HandleScope scope;
  int32_t age = my_age();

  Local<Integer> e = Integer::New(age);
  return scope.Close( e  );
}

void init(Handle<Object> exports) {
  exports->Set(String::NewSymbol("getAge"),
      FunctionTemplate::New(myAgeMethod)->GetFunction());
}

NODE_MODULE(myage, init)

