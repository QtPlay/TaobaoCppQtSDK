#include <TaoApiCpp/request/ItemJointPropimgRequest.h>

QString ItemJointPropimgRequest::getApiMethodName() const {
  return "taobao.item.joint.propimg";
}

qlonglong ItemJointPropimgRequest::getId() const {
  return id;
}
void ItemJointPropimgRequest::setId (qlonglong id) {
  this->id = id;
  appParams.insert("id", QString::number(id));
}

qlonglong ItemJointPropimgRequest::getNumIid() const {
  return numIid;
}
void ItemJointPropimgRequest::setNumIid (qlonglong numIid) {
  this->numIid = numIid;
  appParams.insert("num_iid", QString::number(numIid));
}

QString ItemJointPropimgRequest::getPicPath() const {
  return picPath;
}
void ItemJointPropimgRequest::setPicPath (QString picPath) {
  this->picPath = picPath;
  appParams.insert("pic_path", picPath);
}

qlonglong ItemJointPropimgRequest::getPosition() const {
  return position;
}
void ItemJointPropimgRequest::setPosition (qlonglong position) {
  this->position = position;
  appParams.insert("position", QString::number(position));
}

QString ItemJointPropimgRequest::getProperties() const {
  return properties;
}
void ItemJointPropimgRequest::setProperties (QString properties) {
  this->properties = properties;
  appParams.insert("properties", properties);
}



ItemJointPropimgResponse *ItemJointPropimgRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  ItemJointPropimgResponse *tmpResponse = new ItemJointPropimgResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
