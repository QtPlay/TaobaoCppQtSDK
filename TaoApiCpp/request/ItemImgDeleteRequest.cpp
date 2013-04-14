#include <TaoApiCpp/request/ItemImgDeleteRequest.h>

QString ItemImgDeleteRequest::getApiMethodName() const {
  return "taobao.item.img.delete";
}

qlonglong ItemImgDeleteRequest::getId() const {
  return id;
}
void ItemImgDeleteRequest::setId (qlonglong id) {
  this->id = id;
  appParams.insert("id", QString::number(id));
}

qlonglong ItemImgDeleteRequest::getNumIid() const {
  return numIid;
}
void ItemImgDeleteRequest::setNumIid (qlonglong numIid) {
  this->numIid = numIid;
  appParams.insert("num_iid", QString::number(numIid));
}



ItemImgDeleteResponse *ItemImgDeleteRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  ItemImgDeleteResponse *tmpResponse = new ItemImgDeleteResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
