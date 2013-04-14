#include <TaoApiCpp/request/ItemRecommendAddRequest.h>

QString ItemRecommendAddRequest::getApiMethodName() const {
  return "taobao.item.recommend.add";
}

qlonglong ItemRecommendAddRequest::getNumIid() const {
  return numIid;
}
void ItemRecommendAddRequest::setNumIid (qlonglong numIid) {
  this->numIid = numIid;
  appParams.insert("num_iid", QString::number(numIid));
}



ItemRecommendAddResponse *ItemRecommendAddRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  ItemRecommendAddResponse *tmpResponse = new ItemRecommendAddResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
