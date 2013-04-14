#ifndef REFUNDGETREQUEST_H
#define REFUNDGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/RefundGetResponse.h>

/**
 * TOP API: 获取单笔退款详情
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class RefundGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getFields() const
;  void setFields (QString fields);

 qlonglong getRefundId() const
;  void setRefundId (qlonglong refundId);


  virtual RefundGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 需要返回的字段。目前支持有：refund_id, alipay_no, tid, oid, buyer_nick, seller_nick, total_fee, status, created, refund_fee, good_status, has_good_return, payment, reason, desc, num_iid, title, price, num, good_return_time, company_name, sid, address, shipping_type, refund_remind_timeout
 **/
  QString fields;

/**
 * @brief 退款单号
 **/
  qlonglong refundId;

};

#endif  /* REFUNDGETREQUEST_H */
