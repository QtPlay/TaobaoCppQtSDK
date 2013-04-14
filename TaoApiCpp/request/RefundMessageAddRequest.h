#ifndef REFUNDMESSAGEADDREQUEST_H
#define REFUNDMESSAGEADDREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/RefundMessageAddResponse.h>

/**
 * TOP API: 创建退款留言/凭证
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class RefundMessageAddRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getContent() const
;  void setContent (QString content);

 FileItem getImage() const
;  void setImage (FileItem image);

 qlonglong getRefundId() const
;  void setRefundId (qlonglong refundId);


  virtual RefundMessageAddResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 留言内容。最大长度: 400个字节
 **/
  QString content;

/**
 * @brief 图片（凭证）。类型: JPG,GIF,PNG;最大为: 500K
 **/
  FileItem image;

/**
 * @brief 退款编号。
 **/
  qlonglong refundId;

};

#endif  /* REFUNDMESSAGEADDREQUEST_H */
