#include <TaoApiCpp/request/SkusQuantityUpdateRequest.h>

QString SkusQuantityUpdateRequest::getApiMethodName() const {
  return "taobao.skus.quantity.update";
}

qlonglong SkusQuantityUpdateRequest::getNumIid() const {
  return numIid;
}
void SkusQuantityUpdateRequest::setNumIid (qlonglong numIid) {
  this->numIid = numIid;
  appParams.insert("num_iid", QString::number(numIid));
}

QString SkusQuantityUpdateRequest::getOuteridQuantities() const {
  return outeridQuantities;
}
void SkusQuantityUpdateRequest::setOuteridQuantities (QString outeridQuantities) {
  this->outeridQuantities = outeridQuantities;
  appParams.insert("outerid_quantities", outeridQuantities);
}

QString SkusQuantityUpdateRequest::getSkuidQuantities() const {
  return skuidQuantities;
}
void SkusQuantityUpdateRequest::setSkuidQuantities (QString skuidQuantities) {
  this->skuidQuantities = skuidQuantities;
  appParams.insert("skuid_quantities", skuidQuantities);
}

qlonglong SkusQuantityUpdateRequest::getType() const {
  return type;
}
void SkusQuantityUpdateRequest::setType (qlonglong type) {
  this->type = type;
  appParams.insert("type", QString::number(type));
}



SkusQuantityUpdateResponse *SkusQuantityUpdateRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  SkusQuantityUpdateResponse *tmpResponse = new SkusQuantityUpdateResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
