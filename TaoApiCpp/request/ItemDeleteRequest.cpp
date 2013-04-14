#include <TaoApiCpp/request/ItemDeleteRequest.h>

QString ItemDeleteRequest::getApiMethodName() const {
  return "taobao.item.delete";
}

qlonglong ItemDeleteRequest::getNumIid() const {
  return numIid;
}
void ItemDeleteRequest::setNumIid (qlonglong numIid) {
  this->numIid = numIid;
  appParams.insert("num_iid", QString::number(numIid));
}



ItemDeleteResponse *ItemDeleteRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  ItemDeleteResponse *tmpResponse = new ItemDeleteResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
