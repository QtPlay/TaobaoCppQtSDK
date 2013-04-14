#ifndef REFUNDSRECEIVEGETREQUEST_H
#define REFUNDSRECEIVEGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/RefundsReceiveGetResponse.h>

/**
 * TOP API: 查询卖家收到的退款列表，查询外店的退款列表时需要指定交易类型
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class RefundsReceiveGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getBuyerNick() const
;  void setBuyerNick (QString buyerNick);

 QDateTime getEndModified() const
;  void setEndModified (QDateTime endModified);

 QString getFields() const
;  void setFields (QString fields);

 qlonglong getPageNo() const
;  void setPageNo (qlonglong pageNo);

 qlonglong getPageSize() const
;  void setPageSize (qlonglong pageSize);

 QDateTime getStartModified() const
;  void setStartModified (QDateTime startModified);

 QString getStatus() const
;  void setStatus (QString status);

 QString getType() const
;  void setType (QString type);

 bool getUseHasNext() const
;  void setUseHasNext (bool useHasNext);


  virtual RefundsReceiveGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 买家昵称
 **/
  QString buyerNick;

/**
 * @brief 查询修改时间结束。格式: yyyy-MM-dd HH:mm:ss
 **/
  QDateTime endModified;

/**
 * @brief 需要返回的字段。目前支持有：refund_id, tid, title, buyer_nick, seller_nick, total_fee, status, created, refund_fee, oid, good_status, company_name, sid, payment, reason, desc, has_good_return, modified, order_status
 **/
  QString fields;

/**
 * @brief 页码。取值范围:大于零的整数; 默认值:1
 **/
  qlonglong pageNo;

/**
 * @brief 每页条数。取值范围:大于零的整数; 默认值:40;最大值:100
 **/
  qlonglong pageSize;

/**
 * @brief 查询修改时间开始。格式: yyyy-MM-dd HH:mm:ss
 **/
  QDateTime startModified;

/**
 * @brief 退款状态，默认查询所有退款状态的数据，除了默认值外每次只能查询一种状态。 
WAIT_SELLER_AGREE(买家已经申请退款，等待卖家同意)  
WAIT_BUYER_RETURN_GOODS(卖家已经同意退款，等待买家退货)  
WAIT_SELLER_CONFIRM_GOODS(买家已经退货，等待卖家确认收货)  
SELLER_REFUSE_BUYER(卖家拒绝退款)  
CLOSED(退款关闭)  
SUCCESS(退款成功)
 **/
  QString status;

/**
 * @brief 交易类型列表，一次查询多种类型可用半角逗号分隔，默认同时查询guarantee_trade, auto_delivery的2种类型的数据。 
fixed(一口价)  
auction(拍卖)  
guarantee_trade(一口价、拍卖)  
independent_simple_trade(旺店入门版交易)  
independent_shop_trade(旺店标准版交易)  
auto_delivery(自动发货)  
ec(直冲)  
cod(货到付款)  
fenxiao(分销)  
game_equipment(游戏装备)  
shopex_trade(ShopEX交易)  
netcn_trade(万网交易)  
external_trade(统一外部交易)
 **/
  QString type;

/**
 * @brief 是否启用has_next的分页方式，如果指定true,则返回的结果中不包含总记录数，但是会新增一个是否存在下一页的的字段，通过此种方式获取增量退款，接口调用成功率在原有的基础上有所提升。
 **/
  bool useHasNext;

};

#endif  /* REFUNDSRECEIVEGETREQUEST_H */
