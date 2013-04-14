#include <TaoApiCpp/response/UmpMbbGetbyidResponse.h>

QString UmpMbbGetbyidResponse::getMbb() const {
  return mbb;
}
void UmpMbbGetbyidResponse::setMbb (QString mbb) {
  this->mbb = mbb;
}

void UmpMbbGetbyidResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("mbb")) {
  mbb = responseParser->getStrByName("mbb");
  }

}

