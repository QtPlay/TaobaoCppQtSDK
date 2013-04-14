#include <TaoApiCpp/request/ItemJointImgRequest.h>

QString ItemJointImgRequest::getApiMethodName() const {
  return "taobao.item.joint.img";
}

qlonglong ItemJointImgRequest::getId() const {
  return id;
}
void ItemJointImgRequest::setId (qlonglong id) {
  this->id = id;
  appParams.insert("id", QString::number(id));
}

bool ItemJointImgRequest::getIsMajor() const {
  return isMajor;
}
void ItemJointImgRequest::setIsMajor (bool isMajor) {
  this->isMajor = isMajor;
  appParams.insert("is_major", isMajor? "true": "false");
}

qlonglong ItemJointImgRequest::getNumIid() const {
  return numIid;
}
void ItemJointImgRequest::setNumIid (qlonglong numIid) {
  this->numIid = numIid;
  appParams.insert("num_iid", QString::number(numIid));
}

QString ItemJointImgRequest::getPicPath() const {
  return picPath;
}
void ItemJointImgRequest::setPicPath (QString picPath) {
  this->picPath = picPath;
  appParams.insert("pic_path", picPath);
}

qlonglong ItemJointImgRequest::getPosition() const {
  return position;
}
void ItemJointImgRequest::setPosition (qlonglong position) {
  this->position = position;
  appParams.insert("position", QString::number(position));
}



ItemJointImgResponse *ItemJointImgRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  ItemJointImgResponse *tmpResponse = new ItemJointImgResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
