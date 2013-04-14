#include <TaoApiCpp/response/WlbItemAuthorizationQueryResponse.h>

QList<WlbAuthorization> WlbItemAuthorizationQueryResponse::getAuthorizationList() const {
  return authorizationList;
}
void WlbItemAuthorizationQueryResponse::setAuthorizationList (QList<WlbAuthorization> authorizationList) {
  this->authorizationList = authorizationList;
}
qlonglong WlbItemAuthorizationQueryResponse::getTotalCount() const {
  return totalCount;
}
void WlbItemAuthorizationQueryResponse::setTotalCount (qlonglong totalCount) {
  this->totalCount = totalCount;
}

void WlbItemAuthorizationQueryResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("authorization_list")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("authorization_list");
  Parser *parser;
  foreach (parser, listParser) {
    WlbAuthorization tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    authorizationList.append(tmp);
  }
  }
  if (responseParser->hasName("total_count")) {
  totalCount = responseParser->getNumByName("total_count");
  }

}

