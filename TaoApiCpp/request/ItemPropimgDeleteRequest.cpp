#include <TaoApiCpp/request/ItemPropimgDeleteRequest.h>

QString ItemPropimgDeleteRequest::getApiMethodName() const {
  return "taobao.item.propimg.delete";
}

qlonglong ItemPropimgDeleteRequest::getId() const {
  return id;
}
void ItemPropimgDeleteRequest::setId (qlonglong id) {
  this->id = id;
  appParams.insert("id", QString::number(id));
}

qlonglong ItemPropimgDeleteRequest::getNumIid() const {
  return numIid;
}
void ItemPropimgDeleteRequest::setNumIid (qlonglong numIid) {
  this->numIid = numIid;
  appParams.insert("num_iid", QString::number(numIid));
}



ItemPropimgDeleteResponse *ItemPropimgDeleteRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  ItemPropimgDeleteResponse *tmpResponse = new ItemPropimgDeleteResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
