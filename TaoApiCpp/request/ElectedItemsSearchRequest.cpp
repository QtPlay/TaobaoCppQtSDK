#include <TaoApiCpp/request/ElectedItemsSearchRequest.h>

QString ElectedItemsSearchRequest::getApiMethodName() const {
  return "tmall.selected.items.search";
}

qlonglong ElectedItemsSearchRequest::getCid() const {
  return cid;
}
void ElectedItemsSearchRequest::setCid (qlonglong cid) {
  this->cid = cid;
  appParams.insert("cid", QString::number(cid));
}



ElectedItemsSearchResponse *ElectedItemsSearchRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  ElectedItemsSearchResponse *tmpResponse = new ElectedItemsSearchResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
