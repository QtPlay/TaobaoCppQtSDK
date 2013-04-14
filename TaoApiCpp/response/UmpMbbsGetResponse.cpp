#include <TaoApiCpp/response/UmpMbbsGetResponse.h>

QList<QString> UmpMbbsGetResponse::getMbbs() const {
  return mbbs;
}
void UmpMbbsGetResponse::setMbbs (QList<QString> mbbs) {
  this->mbbs = mbbs;
}

void UmpMbbsGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("mbbs")) {
  mbbs = responseParser->getListStrByName("mbbs");
  }

}

