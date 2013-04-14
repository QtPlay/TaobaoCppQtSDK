#include <TaoApiCpp/request/SellercatsListAddRequest.h>

QString SellercatsListAddRequest::getApiMethodName() const {
  return "taobao.sellercats.list.add";
}

QString SellercatsListAddRequest::getName() const {
  return name;
}
void SellercatsListAddRequest::setName (QString name) {
  this->name = name;
  appParams.insert("name", name);
}

qlonglong SellercatsListAddRequest::getParentCid() const {
  return parentCid;
}
void SellercatsListAddRequest::setParentCid (qlonglong parentCid) {
  this->parentCid = parentCid;
  appParams.insert("parent_cid", QString::number(parentCid));
}

QString SellercatsListAddRequest::getPictUrl() const {
  return pictUrl;
}
void SellercatsListAddRequest::setPictUrl (QString pictUrl) {
  this->pictUrl = pictUrl;
  appParams.insert("pict_url", pictUrl);
}

qlonglong SellercatsListAddRequest::getSortOrder() const {
  return sortOrder;
}
void SellercatsListAddRequest::setSortOrder (qlonglong sortOrder) {
  this->sortOrder = sortOrder;
  appParams.insert("sort_order", QString::number(sortOrder));
}



SellercatsListAddResponse *SellercatsListAddRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  SellercatsListAddResponse *tmpResponse = new SellercatsListAddResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
