#ifndef REFUNDREFUSERESPONSE_H
#define REFUNDREFUSERESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/Refund.h>


/**
 * @brief TOP RESPONSE API: 卖家拒绝单笔退款交易，要求如下： 
1. 传入的refund_id和相应的tid, oid必须匹配 
2. 如果一笔订单只有一笔子订单，则tid必须与oid相同 
3. 只有卖家才能执行拒绝退款操作 
4. 以下三种情况不能退款：卖家未发货；7天无理由退换货；网游订单
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class RefundRefuseResponse : public TaoResponse
{
public:
 virtual ~RefundRefuseResponse() { }

  Refund getRefund() const;
  void setRefund (Refund refund);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 拒绝退款成功后，会返回Refund数据结构中的refund_id, status, modified字段
 **/
  Refund refund;

};

#endif
