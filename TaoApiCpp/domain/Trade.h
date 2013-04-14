#ifndef TRADE_H
#define TRADE_H

#include <TaoApiCpp/TaoDomain.h>
#include <QDateTime>
#include <QList>
#include <QString>
#include <TaoApiCpp/domain/Order.h>
#include <TaoApiCpp/domain/PromotionDetail.h>
#include <TaoApiCpp/domain/ServiceOrder.h>


/**
 * @brief 交易结构
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class Trade : public TaoDomain
{

public:
 virtual ~Trade() { }

  QString getAdjustFee() const;
  void setAdjustFee (QString adjustFee);
  qlonglong getAlipayId() const;
  void setAlipayId (qlonglong alipayId);
  QString getAlipayNo() const;
  void setAlipayNo (QString alipayNo);
  QString getAlipayUrl() const;
  void setAlipayUrl (QString alipayUrl);
  QString getAlipayWarnMsg() const;
  void setAlipayWarnMsg (QString alipayWarnMsg);
  QString getAreaId() const;
  void setAreaId (QString areaId);
  QString getAvailableConfirmFee() const;
  void setAvailableConfirmFee (QString availableConfirmFee);
  QString getBuyerAlipayNo() const;
  void setBuyerAlipayNo (QString buyerAlipayNo);
  QString getBuyerArea() const;
  void setBuyerArea (QString buyerArea);
  QString getBuyerCodFee() const;
  void setBuyerCodFee (QString buyerCodFee);
  QString getBuyerEmail() const;
  void setBuyerEmail (QString buyerEmail);
  qlonglong getBuyerFlag() const;
  void setBuyerFlag (qlonglong buyerFlag);
  QString getBuyerMemo() const;
  void setBuyerMemo (QString buyerMemo);
  QString getBuyerMessage() const;
  void setBuyerMessage (QString buyerMessage);
  QString getBuyerNick() const;
  void setBuyerNick (QString buyerNick);
  qlonglong getBuyerObtainPointFee() const;
  void setBuyerObtainPointFee (qlonglong buyerObtainPointFee);
  bool getBuyerRate() const;
  void setBuyerRate (bool buyerRate);
  bool getCanRate() const;
  void setCanRate (bool canRate);
  QString getCodFee() const;
  void setCodFee (QString codFee);
  QString getCodStatus() const;
  void setCodStatus (QString codStatus);
  QString getCommissionFee() const;
  void setCommissionFee (QString commissionFee);
  QDateTime getConsignTime() const;
  void setConsignTime (QDateTime consignTime);
  QDateTime getCreated() const;
  void setCreated (QDateTime created);
  QString getCreditCardFee() const;
  void setCreditCardFee (QString creditCardFee);
  QString getDiscountFee() const;
  void setDiscountFee (QString discountFee);
  QDateTime getEndTime() const;
  void setEndTime (QDateTime endTime);
  QString getEticketExt() const;
  void setEticketExt (QString eticketExt);
  QString getExpressAgencyFee() const;
  void setExpressAgencyFee (QString expressAgencyFee);
  bool getHasBuyerMessage() const;
  void setHasBuyerMessage (bool hasBuyerMessage);
  bool getHasPostFee() const;
  void setHasPostFee (bool hasPostFee);
  bool getHasYfx() const;
  void setHasYfx (bool hasYfx);
  QString getIid() const;
  void setIid (QString iid);
  QString getInvoiceName() const;
  void setInvoiceName (QString invoiceName);
  bool getIs3D() const;
  void setIs3D (bool is3D);
  bool getIsBrandSale() const;
  void setIsBrandSale (bool isBrandSale);
  bool getIsForceWlb() const;
  void setIsForceWlb (bool isForceWlb);
  bool getIsLgtype() const;
  void setIsLgtype (bool isLgtype);
  bool getIsPartConsign() const;
  void setIsPartConsign (bool isPartConsign);
  QString getLgAging() const;
  void setLgAging (QString lgAging);
  QString getLgAgingType() const;
  void setLgAgingType (QString lgAgingType);
  QString getMarkDesc() const;
  void setMarkDesc (QString markDesc);
  QDateTime getModified() const;
  void setModified (QDateTime modified);
  qlonglong getNum() const;
  void setNum (qlonglong num);
  qlonglong getNumIid() const;
  void setNumIid (qlonglong numIid);
  QString getNutFeature() const;
  void setNutFeature (QString nutFeature);
  QList<Order> getOrders() const;
  void setOrders (QList<Order> orders);
  QDateTime getPayTime() const;
  void setPayTime (QDateTime payTime);
  QString getPayment() const;
  void setPayment (QString payment);
  QString getPicPath() const;
  void setPicPath (QString picPath);
  qlonglong getPointFee() const;
  void setPointFee (qlonglong pointFee);
  QString getPostFee() const;
  void setPostFee (QString postFee);
  QString getPrice() const;
  void setPrice (QString price);
  QString getPromotion() const;
  void setPromotion (QString promotion);
  QList<PromotionDetail> getPromotionDetails() const;
  void setPromotionDetails (QList<PromotionDetail> promotionDetails);
  qlonglong getRealPointFee() const;
  void setRealPointFee (qlonglong realPointFee);
  QString getReceivedPayment() const;
  void setReceivedPayment (QString receivedPayment);
  QString getReceiverAddress() const;
  void setReceiverAddress (QString receiverAddress);
  QString getReceiverCity() const;
  void setReceiverCity (QString receiverCity);
  QString getReceiverDistrict() const;
  void setReceiverDistrict (QString receiverDistrict);
  QString getReceiverMobile() const;
  void setReceiverMobile (QString receiverMobile);
  QString getReceiverName() const;
  void setReceiverName (QString receiverName);
  QString getReceiverPhone() const;
  void setReceiverPhone (QString receiverPhone);
  QString getReceiverState() const;
  void setReceiverState (QString receiverState);
  QString getReceiverZip() const;
  void setReceiverZip (QString receiverZip);
  QString getSellerAlipayNo() const;
  void setSellerAlipayNo (QString sellerAlipayNo);
  bool getSellerCanRate() const;
  void setSellerCanRate (bool sellerCanRate);
  QString getSellerCodFee() const;
  void setSellerCodFee (QString sellerCodFee);
  QString getSellerEmail() const;
  void setSellerEmail (QString sellerEmail);
  qlonglong getSellerFlag() const;
  void setSellerFlag (qlonglong sellerFlag);
  QString getSellerMemo() const;
  void setSellerMemo (QString sellerMemo);
  QString getSellerMobile() const;
  void setSellerMobile (QString sellerMobile);
  QString getSellerName() const;
  void setSellerName (QString sellerName);
  QString getSellerNick() const;
  void setSellerNick (QString sellerNick);
  QString getSellerPhone() const;
  void setSellerPhone (QString sellerPhone);
  bool getSellerRate() const;
  void setSellerRate (bool sellerRate);
  QString getSendTime() const;
  void setSendTime (QString sendTime);
  QList<ServiceOrder> getServiceOrders() const;
  void setServiceOrders (QList<ServiceOrder> serviceOrders);
  QString getShippingType() const;
  void setShippingType (QString shippingType);
  QString getSnapshot() const;
  void setSnapshot (QString snapshot);
  QString getSnapshotUrl() const;
  void setSnapshotUrl (QString snapshotUrl);
  QString getStatus() const;
  void setStatus (QString status);
  QString getStepPaidFee() const;
  void setStepPaidFee (QString stepPaidFee);
  QString getStepTradeStatus() const;
  void setStepTradeStatus (QString stepTradeStatus);
  qlonglong getTid() const;
  void setTid (qlonglong tid);
  QDateTime getTimeoutActionTime() const;
  void setTimeoutActionTime (QDateTime timeoutActionTime);
  QString getTitle() const;
  void setTitle (QString title);
  QString getTotalFee() const;
  void setTotalFee (QString totalFee);
  QString getTradeFrom() const;
  void setTradeFrom (QString tradeFrom);
  QString getTradeMemo() const;
  void setTradeMemo (QString tradeMemo);
  QString getTradeSource() const;
  void setTradeSource (QString tradeSource);
  QString getType() const;
  void setType (QString type);
  QString getYfxFee() const;
  void setYfxFee (QString yfxFee);
  QString getYfxId() const;
  void setYfxId (QString yfxId);
  qlonglong getYfxType() const;
  void setYfxType (qlonglong yfxType);
  
  virtual void parseResponse();

private:
/**
 * @brief 卖家手工调整金额，精确到2位小数，单位：元。如：200.07，表示：200元7分。来源于订单价格修改，如果有多笔子订单的时候，这个为0，单笔的话则跟[order].adjust_fee一样
 **/
  QString adjustFee;

/**
 * @brief 买家的支付宝id号，在UIC中有记录，买家支付宝的唯一标示，不因为买家更换Email账号而改变。
 **/
  qlonglong alipayId;

/**
 * @brief 支付宝交易号，如：2009112081173831
 **/
  QString alipayNo;

/**
 * @brief 创建交易接口成功后，返回的支付url
 **/
  QString alipayUrl;

/**
 * @brief 淘宝下单成功了,但由于某种错误支付宝订单没有创建时返回的信息。taobao.trade.add接口专用
 **/
  QString alipayWarnMsg;

/**
 * @brief 区域id，代表订单下单的区位码，区位码是通过省市区转换而来，通过区位码能精确到区内的划分，比如310012是杭州市西湖区华星路
 **/
  QString areaId;

/**
 * @brief 交易中剩余的确认收货金额（这个金额会随着子订单确认收货而不断减少，交易成功后会变为零）。精确到2位小数;单位:元。如:200.07，表示:200 元7分
 **/
  QString availableConfirmFee;

/**
 * @brief 买家支付宝账号
 **/
  QString buyerAlipayNo;

/**
 * @brief 买家下单的地区
 **/
  QString buyerArea;

/**
 * @brief 买家货到付款服务费。精确到2位小数;单位:元。如:12.07，表示:12元7分
 **/
  QString buyerCodFee;

/**
 * @brief 买家邮件地址
 **/
  QString buyerEmail;

/**
 * @brief 买家备注旗帜（与淘宝网上订单的买家备注旗帜对应，只有买家才能查看该字段）
红、黄、绿、蓝、紫 分别对应 1、2、3、4、5
 **/
  qlonglong buyerFlag;

/**
 * @brief 买家备注（与淘宝网上订单的买家备注对应，只有买家才能查看该字段）
 **/
  QString buyerMemo;

/**
 * @brief 买家留言
 **/
  QString buyerMessage;

/**
 * @brief 买家昵称
 **/
  QString buyerNick;

/**
 * @brief 买家获得积分,返点的积分。格式:100;单位:个。返点的积分要交易成功之后才能获得。
 **/
  qlonglong buyerObtainPointFee;

/**
 * @brief 买家是否已评价。可选值:true(已评价),false(未评价)。如买家只评价未打分，此字段仍返回false
 **/
  bool buyerRate;

/**
 * @brief 买家可以通过此字段查询是否当前交易可以评论，can_rate=true可以评价，false则不能评价。
 **/
  bool canRate;

/**
 * @brief 货到付款服务费。精确到2位小数;单位:元。如:12.07，表示:12元7分。
 **/
  QString codFee;

/**
 * @brief 货到付款物流状态。
初始状态 NEW_CREATED,
接单成功 ACCEPTED_BY_COMPANY,
接单失败 REJECTED_BY_COMPANY,
接单超时 RECIEVE_TIMEOUT,
揽收成功 TAKEN_IN_SUCCESS,
揽收失败 TAKEN_IN_FAILED,
揽收超时 TAKEN_TIMEOUT,
签收成功 SIGN_IN,
签收失败 REJECTED_BY_OTHER_SIDE,
订单等待发送给物流公司 WAITING_TO_BE_SENT,
用户取消物流订单 CANCELED
 **/
  QString codStatus;

/**
 * @brief 交易佣金。精确到2位小数;单位:元。如:200.07，表示:200元7分
 **/
  QString commissionFee;

/**
 * @brief 卖家发货时间。格式:yyyy-MM-dd HH:mm:ss
 **/
  QDateTime consignTime;

/**
 * @brief 交易创建时间。格式:yyyy-MM-dd HH:mm:ss
 **/
  QDateTime created;

/**
 * @brief 使用信用卡支付金额数
 **/
  QString creditCardFee;

/**
 * @brief 系统优惠金额（如打折，VIP，满就送等），精确到2位小数，单位：元。如：200.07，表示：200元7分
 **/
  QString discountFee;

/**
 * @brief 交易结束时间。交易成功时间(更新交易状态为成功的同时更新)/确认收货时间或者交易关闭时间 。格式:yyyy-MM-dd HH:mm:ss
 **/
  QDateTime endTime;

/**
 * @brief 电子凭证的垂直信息
 **/
  QString eticketExt;

/**
 * @brief 快递代收款。精确到2位小数;单位:元。如:212.07，表示:212元7分
 **/
  QString expressAgencyFee;

/**
 * @brief 判断订单是否有买家留言，有买家留言返回true，否则返回false
 **/
  bool hasBuyerMessage;

/**
 * @brief 是否包含邮费。与available_confirm_fee同时使用。可选值:true(包含),false(不包含)
 **/
  bool hasPostFee;

/**
 * @brief 订单中是否包含运费险订单，如果包含运费险订单返回true，不包含运费险订单，返回false
 **/
  bool hasYfx;

/**
 * @brief 商品字符串编号(注意：iid近期即将废弃，请用num_iid参数)
 **/
  QString iid;

/**
 * @brief 发票抬头
 **/
  QString invoiceName;

/**
 * @brief 是否是3D淘宝交易
 **/
  bool is3D;

/**
 * @brief 表示是否是品牌特卖（常规特卖，不包括特卖惠和特实惠）订单，如果是返回true，如果不是返回false。当此字段与is_force_wlb均为true时，订单强制物流宝发货。
 **/
  bool isBrandSale;

/**
 * @brief 订单是否强制使用物流宝发货。当此字段与is_brand_sale均为true时，订单强制物流宝发货。此字段为false时，该订单根据流转规则设置可以使用物流宝或者常规方式发货
 **/
  bool isForceWlb;

/**
 * @brief 是否保障速递，如果为true，则为保障速递订单，使用线下联系发货接口发货，如果未false，则该订单非保障速递，根据卖家设置的订单流转规则可使用物流宝或者常规物流发货。
 **/
  bool isLgtype;

/**
 * @brief 是否是多次发货的订单 
如果卖家对订单进行多次发货，则为true 
否则为false
 **/
  bool isPartConsign;

/**
 * @brief 次日达订单送达时间
 **/
  QString lgAging;

/**
 * @brief 次日达，三日达等送达类型
 **/
  QString lgAgingType;

/**
 * @brief 订单出现异常问题的时候，给予用户的描述,没有异常的时候，此值为空
 **/
  QString markDesc;

/**
 * @brief 交易修改时间(用户对订单的任何修改都会更新此字段)。格式:yyyy-MM-dd HH:mm:ss
 **/
  QDateTime modified;

/**
 * @brief 商品购买数量。取值范围：大于零的整数,对于一个trade对应多个order的时候（一笔主订单，对应多笔子订单），num=0，num是一个跟商品关联的属性，一笔订单对应多比子订单的时候，主订单上的num无意义。
 **/
  qlonglong num;

/**
 * @brief 商品数字编号
 **/
  qlonglong numIid;

/**
 * @brief 卡易售垂直表信息，去除下单ip之后的结果
 **/
  QString nutFeature;

/**
 * @brief 订单列表
 **/
  QList<Order> orders;

/**
 * @brief 付款时间。格式:yyyy-MM-dd HH:mm:ss。订单的付款时间即为物流订单的创建时间。
 **/
  QDateTime payTime;

/**
 * @brief 实付金额。精确到2位小数;单位:元。如:200.07，表示:200元7分
 **/
  QString payment;

/**
 * @brief 商品图片绝对途径
 **/
  QString picPath;

/**
 * @brief 买家使用积分。格式:100;单位:个.
 **/
  qlonglong pointFee;

/**
 * @brief 邮费。精确到2位小数;单位:元。如:200.07，表示:200元7分
 **/
  QString postFee;

/**
 * @brief 商品价格。精确到2位小数；单位：元。如：200.07，表示：200元7分
 **/
  QString price;

/**
 * @brief 交易促销详细信息
 **/
  QString promotion;

/**
 * @brief 优惠详情
 **/
  QList<PromotionDetail> promotionDetails;

/**
 * @brief 买家实际使用积分（扣除部分退款使用的积分）。格式:100;单位:个
 **/
  qlonglong realPointFee;

/**
 * @brief 卖家实际收到的支付宝打款金额（由于子订单可以部分确认收货，这个金额会随着子订单的确认收货而不断增加，交易成功后等于买家实付款减去退款金额）。精确到2位小数;单位:元。如:200.07，表示:200元7分
 **/
  QString receivedPayment;

/**
 * @brief 收货人的详细地址
 **/
  QString receiverAddress;

/**
 * @brief 收货人的所在城市
 **/
  QString receiverCity;

/**
 * @brief 收货人的所在地区
 **/
  QString receiverDistrict;

/**
 * @brief 收货人的手机号码
 **/
  QString receiverMobile;

/**
 * @brief 收货人的姓名
 **/
  QString receiverName;

/**
 * @brief 收货人的电话号码
 **/
  QString receiverPhone;

/**
 * @brief 收货人的所在省份
 **/
  QString receiverState;

/**
 * @brief 收货人的邮编
 **/
  QString receiverZip;

/**
 * @brief 卖家支付宝账号
 **/
  QString sellerAlipayNo;

/**
 * @brief 卖家是否可以对订单进行评价
 **/
  bool sellerCanRate;

/**
 * @brief 卖家货到付款服务费。精确到2位小数;单位:元。如:12.07，表示:12元7分。卖家不承担服务费的订单：未发货的订单获取服务费为0，发货后就能获取到正确值。
 **/
  QString sellerCodFee;

/**
 * @brief 卖家邮件地址
 **/
  QString sellerEmail;

/**
 * @brief 卖家备注旗帜（与淘宝网上订单的卖家备注旗帜对应，只有卖家才能查看该字段）
红、黄、绿、蓝、紫 分别对应 1、2、3、4、5
 **/
  qlonglong sellerFlag;

/**
 * @brief 卖家备注（与淘宝网上订单的卖家备注对应，只有卖家才能查看该字段）
 **/
  QString sellerMemo;

/**
 * @brief 卖家手机
 **/
  QString sellerMobile;

/**
 * @brief 卖家姓名
 **/
  QString sellerName;

/**
 * @brief 卖家昵称
 **/
  QString sellerNick;

/**
 * @brief 卖家电话
 **/
  QString sellerPhone;

/**
 * @brief 卖家是否已评价。可选值:true(已评价),false(未评价)
 **/
  bool sellerRate;

/**
 * @brief 订单将在此时间前发出，主要用于预售订单
 **/
  QString sendTime;

/**
 * @brief 服务子订单列表
 **/
  QList<ServiceOrder> serviceOrders;

/**
 * @brief 创建交易时的物流方式（交易完成前，物流方式有可能改变，但系统里的这个字段一直不变）。可选值：free(卖家包邮),post(平邮),express(快递),ems(EMS), virtual(虚拟发货)。
 **/
  QString shippingType;

/**
 * @brief 交易快照详细信息
 **/
  QString snapshot;

/**
 * @brief 交易快照地址
 **/
  QString snapshotUrl;

/**
 * @brief 交易状态。可选值: 
    * TRADE_NO_CREATE_PAY(没有创建支付宝交易) 
    * WAIT_BUYER_PAY(等待买家付款) 
    * SELLER_CONSIGNED_PART(卖家部分发货) 
    * WAIT_SELLER_SEND_GOODS(等待卖家发货,即:买家已付款) 
    * WAIT_BUYER_CONFIRM_GOODS(等待买家确认收货,即:卖家已发货) 
    * TRADE_BUYER_SIGNED(买家已签收,货到付款专用) 
    * TRADE_FINISHED(交易成功) 
    * TRADE_CLOSED(付款以后用户退款成功，交易自动关闭) 
    * TRADE_CLOSED_BY_TAOBAO(付款以前，卖家或买家主动关闭交易)
 **/
  QString status;

/**
 * @brief 分阶段付款的已付金额（万人团订单已付金额）
 **/
  QString stepPaidFee;

/**
 * @brief 分阶段付款的订单状态（例如万人团订单等），目前有三返回状态 
FRONT_NOPAID_FINAL_NOPAID(定金未付尾款未付)，FRONT_PAID_FINAL_NOPAID(定金已付尾款未付)，FRONT_PAID_FINAL_PAID(定金和尾款都付)
 **/
  QString stepTradeStatus;

/**
 * @brief 交易编号 (父订单的交易编号)
 **/
  qlonglong tid;

/**
 * @brief 超时到期时间。格式:yyyy-MM-dd HH:mm:ss。业务规则： 
前提条件：只有在买家已付款，卖家已发货的情况下才有效 
如果申请了退款，那么超时会落在子订单上；比如说3笔ABC，A申请了，那么返回的是BC的列表, 主定单不存在 
如果没有申请过退款，那么超时会挂在主定单上；比如ABC，返回主定单，ABC的超时和主定单相同
 **/
  QDateTime timeoutActionTime;

/**
 * @brief 交易标题，以店铺名作为此标题的值。注:taobao.trades.get接口返回的Trade中的title是商品名称
 **/
  QString title;

/**
 * @brief 商品金额（商品价格乘以数量的总金额）。精确到2位小数;单位:元。如:200.07，表示:200元7分
 **/
  QString totalFee;

/**
 * @brief 交易内部来源。 
WAP(手机);HITAO(嗨淘);TOP(TOP平台);TAOBAO(普通淘宝);JHS(聚划算) 
一笔订单可能同时有以上多个标记，则以逗号分隔
 **/
  QString tradeFrom;

/**
 * @brief 交易备注。
 **/
  QString tradeMemo;

/**
 * @brief 交易外部来源：ownshop(商家官网)
 **/
  QString tradeSource;

/**
 * @brief 交易类型列表，同时查询多种交易类型可用逗号分隔。默认同时查询guarantee_trade, auto_delivery, ec, cod的4种交易类型的数据 
可选值 
fixed(一口价) 
auction(拍卖) 
guarantee_trade(一口价、拍卖) 
auto_delivery(自动发货) 
independent_simple_trade(旺店入门版交易) 
independent_shop_trade(旺店标准版交易) 
ec(直冲) 
cod(货到付款) 
fenxiao(分销) 
game_equipment(游戏装备) 
shopex_trade(ShopEX交易) 
netcn_trade(万网交易) 
external_trade(统一外部交易)
step (万人团)
 **/
  QString type;

/**
 * @brief 订单的运费险，单位为元
 **/
  QString yfxFee;

/**
 * @brief 运费险支付号
 **/
  QString yfxId;

/**
 * @brief 运费险类型：1表示卖家运费险；2表示买家运费险
 **/
  qlonglong yfxType;

};

#endif  /* TRADE_H */
