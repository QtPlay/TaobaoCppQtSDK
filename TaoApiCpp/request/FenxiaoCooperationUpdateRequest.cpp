#include <TaoApiCpp/request/FenxiaoCooperationUpdateRequest.h>

QString FenxiaoCooperationUpdateRequest::getApiMethodName() const {
  return "taobao.fenxiao.cooperation.update";
}

qlonglong FenxiaoCooperationUpdateRequest::getDistributorId() const {
  return distributorId;
}
void FenxiaoCooperationUpdateRequest::setDistributorId (qlonglong distributorId) {
  this->distributorId = distributorId;
  appParams.insert("distributor_id", QString::number(distributorId));
}

qlonglong FenxiaoCooperationUpdateRequest::getGradeId() const {
  return gradeId;
}
void FenxiaoCooperationUpdateRequest::setGradeId (qlonglong gradeId) {
  this->gradeId = gradeId;
  appParams.insert("grade_id", QString::number(gradeId));
}

QString FenxiaoCooperationUpdateRequest::getTradeType() const {
  return tradeType;
}
void FenxiaoCooperationUpdateRequest::setTradeType (QString tradeType) {
  this->tradeType = tradeType;
  appParams.insert("trade_type", tradeType);
}



FenxiaoCooperationUpdateResponse *FenxiaoCooperationUpdateRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  FenxiaoCooperationUpdateResponse *tmpResponse = new FenxiaoCooperationUpdateResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
