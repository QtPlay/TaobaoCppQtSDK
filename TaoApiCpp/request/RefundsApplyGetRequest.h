#ifndef REFUNDSAPPLYGETREQUEST_H
#define REFUNDSAPPLYGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/RefundsApplyGetResponse.h>

/**
 * TOP API: 查询买家申请的退款列表，且查询外店的退款列表时需要指定交易类型
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class RefundsApplyGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getFields() const
;  void setFields (QString fields);

 qlonglong getPageNo() const
;  void setPageNo (qlonglong pageNo);

 qlonglong getPageSize() const
;  void setPageSize (qlonglong pageSize);

 QString getSellerNick() const
;  void setSellerNick (QString sellerNick);

 QString getStatus() const
;  void setStatus (QString status);

 QString getType() const
;  void setType (QString type);


  virtual RefundsApplyGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 需要返回的字段。目前支持有：refund_id, tid, title, buyer_nick, seller_nick, total_fee, status, created, refund_fee
 **/
  QString fields;

/**
 * @brief 页码。传入值为 1 代表第一页，传入值为 2 代表第二页，依此类推。默认返回的数据是从第一页开始
 **/
  qlonglong pageNo;

/**
 * @brief 每页条数。取值范围:大于零的整数; 默认值:40;最大值:100
 **/
  qlonglong pageSize;

/**
 * @brief 卖家昵称
 **/
  QString sellerNick;

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

};

#endif  /* REFUNDSAPPLYGETREQUEST_H */
