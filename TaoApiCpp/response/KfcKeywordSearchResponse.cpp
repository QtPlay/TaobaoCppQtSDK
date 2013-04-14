#include <TaoApiCpp/response/KfcKeywordSearchResponse.h>

KfcSearchResult KfcKeywordSearchResponse::getKfcSearchResult() const {
  return kfcSearchResult;
}
void KfcKeywordSearchResponse::setKfcSearchResult (KfcSearchResult kfcSearchResult) {
  this->kfcSearchResult = kfcSearchResult;
}

void KfcKeywordSearchResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("kfc_search_result")) {
  kfcSearchResult.setParser(responseParser->getObjectParser("kfc_search_result"));
  kfcSearchResult.parseResponse();
  }

}

