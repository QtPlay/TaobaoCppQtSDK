#include <TaoApiCpp/request/ItemRecommendDeleteRequest.h>

QString ItemRecommendDeleteRequest::getApiMethodName() const {
  return "taobao.item.recommend.delete";
}

qlonglong ItemRecommendDeleteRequest::getNumIid() const {
  return numIid;
}
void ItemRecommendDeleteRequest::setNumIid (qlonglong numIid) {
  this->numIid = numIid;
  appParams.insert("num_iid", QString::number(numIid));
}



ItemRecommendDeleteResponse *ItemRecommendDeleteRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  ItemRecommendDeleteResponse *tmpResponse = new ItemRecommendDeleteResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
