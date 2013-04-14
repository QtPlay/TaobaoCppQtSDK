#include <TaoApiCpp/request/EmaiSubcatsSearchRequest.h>

QString EmaiSubcatsSearchRequest::getApiMethodName() const {
  return "tmall.temai.subcats.search";
}

qlonglong EmaiSubcatsSearchRequest::getCat() const {
  return cat;
}
void EmaiSubcatsSearchRequest::setCat (qlonglong cat) {
  this->cat = cat;
  appParams.insert("cat", QString::number(cat));
}



EmaiSubcatsSearchResponse *EmaiSubcatsSearchRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  EmaiSubcatsSearchResponse *tmpResponse = new EmaiSubcatsSearchResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
