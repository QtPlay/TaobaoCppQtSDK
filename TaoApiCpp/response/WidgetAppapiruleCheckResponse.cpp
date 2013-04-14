#include <TaoApiCpp/response/WidgetAppapiruleCheckResponse.h>

QString WidgetAppapiruleCheckResponse::getCallPermission() const {
  return callPermission;
}
void WidgetAppapiruleCheckResponse::setCallPermission (QString callPermission) {
  this->callPermission = callPermission;
}
QString WidgetAppapiruleCheckResponse::getHttpMethod() const {
  return httpMethod;
}
void WidgetAppapiruleCheckResponse::setHttpMethod (QString httpMethod) {
  this->httpMethod = httpMethod;
}
QString WidgetAppapiruleCheckResponse::getNeedAuth() const {
  return needAuth;
}
void WidgetAppapiruleCheckResponse::setNeedAuth (QString needAuth) {
  this->needAuth = needAuth;
}

void WidgetAppapiruleCheckResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("call_permission")) {
  callPermission = responseParser->getStrByName("call_permission");
  }
  if (responseParser->hasName("http_method")) {
  httpMethod = responseParser->getStrByName("http_method");
  }
  if (responseParser->hasName("need_auth")) {
  needAuth = responseParser->getStrByName("need_auth");
  }

}

