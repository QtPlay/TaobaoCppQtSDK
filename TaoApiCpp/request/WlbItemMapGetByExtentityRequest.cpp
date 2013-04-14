#include <TaoApiCpp/request/WlbItemMapGetByExtentityRequest.h>

QString WlbItemMapGetByExtentityRequest::getApiMethodName() const {
  return "taobao.wlb.item.map.get.by.extentity";
}

qlonglong WlbItemMapGetByExtentityRequest::getExtEntityId() const {
  return extEntityId;
}
void WlbItemMapGetByExtentityRequest::setExtEntityId (qlonglong extEntityId) {
  this->extEntityId = extEntityId;
  appParams.insert("ext_entity_id", QString::number(extEntityId));
}

QString WlbItemMapGetByExtentityRequest::getExtEntityType() const {
  return extEntityType;
}
void WlbItemMapGetByExtentityRequest::setExtEntityType (QString extEntityType) {
  this->extEntityType = extEntityType;
  appParams.insert("ext_entity_type", extEntityType);
}



WlbItemMapGetByExtentityResponse *WlbItemMapGetByExtentityRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  WlbItemMapGetByExtentityResponse *tmpResponse = new WlbItemMapGetByExtentityResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
