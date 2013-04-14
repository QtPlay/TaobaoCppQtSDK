#include <TaoApiCpp/request/SellercatsListUpdateRequest.h>

QString SellercatsListUpdateRequest::getApiMethodName() const {
  return "taobao.sellercats.list.update";
}

qlonglong SellercatsListUpdateRequest::getCid() const {
  return cid;
}
void SellercatsListUpdateRequest::setCid (qlonglong cid) {
  this->cid = cid;
  appParams.insert("cid", QString::number(cid));
}

QString SellercatsListUpdateRequest::getName() const {
  return name;
}
void SellercatsListUpdateRequest::setName (QString name) {
  this->name = name;
  appParams.insert("name", name);
}

QString SellercatsListUpdateRequest::getPictUrl() const {
  return pictUrl;
}
void SellercatsListUpdateRequest::setPictUrl (QString pictUrl) {
  this->pictUrl = pictUrl;
  appParams.insert("pict_url", pictUrl);
}

qlonglong SellercatsListUpdateRequest::getSortOrder() const {
  return sortOrder;
}
void SellercatsListUpdateRequest::setSortOrder (qlonglong sortOrder) {
  this->sortOrder = sortOrder;
  appParams.insert("sort_order", QString::number(sortOrder));
}



SellercatsListUpdateResponse *SellercatsListUpdateRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  SellercatsListUpdateResponse *tmpResponse = new SellercatsListUpdateResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
