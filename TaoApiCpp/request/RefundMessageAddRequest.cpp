#include <TaoApiCpp/request/RefundMessageAddRequest.h>

QString RefundMessageAddRequest::getApiMethodName() const {
  return "taobao.refund.message.add";
}

QString RefundMessageAddRequest::getContent() const {
  return content;
}
void RefundMessageAddRequest::setContent (QString content) {
  this->content = content;
  appParams.insert("content", content);
}

FileItem RefundMessageAddRequest::getImage() const {
  return image;
}
void RefundMessageAddRequest::setImage (FileItem image) {
  this->image = image;
  fileParams.insert("image", image);
}

qlonglong RefundMessageAddRequest::getRefundId() const {
  return refundId;
}
void RefundMessageAddRequest::setRefundId (qlonglong refundId) {
  this->refundId = refundId;
  appParams.insert("refund_id", QString::number(refundId));
}



RefundMessageAddResponse *RefundMessageAddRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  RefundMessageAddResponse *tmpResponse = new RefundMessageAddResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
