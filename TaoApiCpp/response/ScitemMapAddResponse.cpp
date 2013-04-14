#include <TaoApiCpp/response/ScitemMapAddResponse.h>

QString ScitemMapAddResponse::getOuterCode() const {
  return outerCode;
}
void ScitemMapAddResponse::setOuterCode (QString outerCode) {
  this->outerCode = outerCode;
}

void ScitemMapAddResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("outer_code")) {
  outerCode = responseParser->getStrByName("outer_code");
  }

}

