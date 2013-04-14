#include <TaoApiCpp/request/MarketingPromotionsGetRequest.h>

QString MarketingPromotionsGetRequest::getApiMethodName() const {
  return "taobao.marketing.promotions.get";
}

QString MarketingPromotionsGetRequest::getFields() const {
  return fields;
}
void MarketingPromotionsGetRequest::setFields (QString fields) {
  this->fields = fields;
  appParams.insert("fields", fields);
}

QString MarketingPromotionsGetRequest::getNumIid() const {
  return numIid;
}
void MarketingPromotionsGetRequest::setNumIid (QString numIid) {
  this->numIid = numIid;
  appParams.insert("num_iid", numIid);
}

QString MarketingPromotionsGetRequest::getStatus() const {
  return status;
}
void MarketingPromotionsGetRequest::setStatus (QString status) {
  this->status = status;
  appParams.insert("status", status);
}

qlonglong MarketingPromotionsGetRequest::getTagId() const {
  return tagId;
}
void MarketingPromotionsGetRequest::setTagId (qlonglong tagId) {
  this->tagId = tagId;
  appParams.insert("tag_id", QString::number(tagId));
}



MarketingPromotionsGetResponse *MarketingPromotionsGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  MarketingPromotionsGetResponse *tmpResponse = new MarketingPromotionsGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
