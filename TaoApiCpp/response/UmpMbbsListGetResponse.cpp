#include <TaoApiCpp/response/UmpMbbsListGetResponse.h>

QList<QString> UmpMbbsListGetResponse::getMbbs() const {
  return mbbs;
}
void UmpMbbsListGetResponse::setMbbs (QList<QString> mbbs) {
  this->mbbs = mbbs;
}

void UmpMbbsListGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("mbbs")) {
  mbbs = responseParser->getListStrByName("mbbs");
  }

}

