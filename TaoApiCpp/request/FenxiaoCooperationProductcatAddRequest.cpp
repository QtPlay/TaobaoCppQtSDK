#include <TaoApiCpp/request/FenxiaoCooperationProductcatAddRequest.h>

QString FenxiaoCooperationProductcatAddRequest::getApiMethodName() const {
  return "taobao.fenxiao.cooperation.productcat.add";
}

qlonglong FenxiaoCooperationProductcatAddRequest::getCooperateId() const {
  return cooperateId;
}
void FenxiaoCooperationProductcatAddRequest::setCooperateId (qlonglong cooperateId) {
  this->cooperateId = cooperateId;
  appParams.insert("cooperate_id", QString::number(cooperateId));
}

qlonglong FenxiaoCooperationProductcatAddRequest::getGradeId() const {
  return gradeId;
}
void FenxiaoCooperationProductcatAddRequest::setGradeId (qlonglong gradeId) {
  this->gradeId = gradeId;
  appParams.insert("grade_id", QString::number(gradeId));
}

QString FenxiaoCooperationProductcatAddRequest::getProductLineList() const {
  return productLineList;
}
void FenxiaoCooperationProductcatAddRequest::setProductLineList (QString productLineList) {
  this->productLineList = productLineList;
  appParams.insert("product_line_list", productLineList);
}



FenxiaoCooperationProductcatAddResponse *FenxiaoCooperationProductcatAddRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  FenxiaoCooperationProductcatAddResponse *tmpResponse = new FenxiaoCooperationProductcatAddResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
