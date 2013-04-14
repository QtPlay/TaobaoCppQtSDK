#include <TaoApiCpp/request/ItempropvaluesGetRequest.h>

QString ItempropvaluesGetRequest::getApiMethodName() const {
  return "taobao.itempropvalues.get";
}

qlonglong ItempropvaluesGetRequest::getCid() const {
  return cid;
}
void ItempropvaluesGetRequest::setCid (qlonglong cid) {
  this->cid = cid;
  appParams.insert("cid", QString::number(cid));
}

QString ItempropvaluesGetRequest::getFields() const {
  return fields;
}
void ItempropvaluesGetRequest::setFields (QString fields) {
  this->fields = fields;
  appParams.insert("fields", fields);
}

QString ItempropvaluesGetRequest::getPvs() const {
  return pvs;
}
void ItempropvaluesGetRequest::setPvs (QString pvs) {
  this->pvs = pvs;
  appParams.insert("pvs", pvs);
}

qlonglong ItempropvaluesGetRequest::getType() const {
  return type;
}
void ItempropvaluesGetRequest::setType (qlonglong type) {
  this->type = type;
  appParams.insert("type", QString::number(type));
}



ItempropvaluesGetResponse *ItempropvaluesGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  ItempropvaluesGetResponse *tmpResponse = new ItempropvaluesGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
