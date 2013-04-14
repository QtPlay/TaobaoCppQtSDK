#include <TaoApiCpp/response/ScitemMapDeleteResponse.h>

qlonglong ScitemMapDeleteResponse::getModule() const {
  return module;
}
void ScitemMapDeleteResponse::setModule (qlonglong module) {
  this->module = module;
}

void ScitemMapDeleteResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("module")) {
  module = responseParser->getNumByName("module");
  }

}

