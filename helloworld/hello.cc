#include <node.h>
#include <v8.h>

using namespace v8;

Handle<Value> Method(const Arguments& args) {
  HandleScope scope;
  return scope.Close(String::New("world"));
}
Handle<Value> Method2(const Arguments& args) {
 HandleScope scope;
 return scope.Close(String::New("pong"));
}

void init(Handle<Object> exports) {
  exports->Set(String::NewSymbol("hello"), FunctionTemplate::New(Method)->GetFunction());
  exports->Set(String::NewSymbol("ping"), FunctionTemplate::New(Method2)->GetFunction());
}

NODE_MODULE(hello, init)

