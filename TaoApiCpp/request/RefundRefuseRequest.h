#ifndef REFUNDREFUSEREQUEST_H
#define REFUNDREFUSEREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/RefundRefuseResponse.h>

/**
 * TOP API: 卖家拒绝单笔退款交易，要求如下： 
1. 传入的refund_id和相应的tid, oid必须匹配 
2. 如果一笔订单只有一笔子订单，则tid必须与oid相同 
3. 只有卖家才能执行拒绝退款操作 
4. 以下三种情况不能退款：卖家未发货；7天无理由退换货；网游订单
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class RefundRefuseRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getOid() const
;  void setOid (qlonglong oid);

 qlonglong getRefundId() const
;  void setRefundId (qlonglong refundId);

 QString getRefuseMessage() const
;  void setRefuseMessage (QString refuseMessage);

 FileItem getRefuseProof() const
;  void setRefuseProof (FileItem refuseProof);

 qlonglong getTid() const
;  void setTid (qlonglong tid);


  virtual RefundRefuseResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 退款记录对应的交易子订单号
 **/
  qlonglong oid;

/**
 * @brief 退款单号
 **/
  qlonglong refundId;

/**
 * @brief 拒绝退款时的说明信息，长度2-200
 **/
  QString refuseMessage;

/**
 * @brief 拒绝退款时的退款凭证，一般是卖家拒绝退款时使用的发货凭证，最大长度130000字节，支持的图片格式：GIF, JPG, PNG
 **/
  FileItem refuseProof;

/**
 * @brief 退款记录对应的交易订单号
 **/
  qlonglong tid;

};

#endif  /* REFUNDREFUSEREQUEST_H */
