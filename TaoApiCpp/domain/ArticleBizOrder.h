#ifndef ARTICLEBIZORDER_H
#define ARTICLEBIZORDER_H

#include <TaoApiCpp/TaoDomain.h>
#include <QDateTime>
#include <QString>


/**
 * @brief 应用订单信息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ArticleBizOrder : public TaoDomain
{

public:
 virtual ~ArticleBizOrder() { }

  QString getArticleCode() const;
  void setArticleCode (QString articleCode);
  QString getArticleItemName() const;
  void setArticleItemName (QString articleItemName);
  QString getArticleName() const;
  void setArticleName (QString articleName);
  qlonglong getBizOrderId() const;
  void setBizOrderId (qlonglong bizOrderId);
  qlonglong getBizType() const;
  void setBizType (qlonglong bizType);
  QDateTime getCreate() const;
  void setCreate (QDateTime create);
  QString getFee() const;
  void setFee (QString fee);
  QString getItemCode() const;
  void setItemCode (QString itemCode);
  QString getItemName() const;
  void setItemName (QString itemName);
  QString getNick() const;
  void setNick (QString nick);
  QString getOrderCycle() const;
  void setOrderCycle (QString orderCycle);
  QDateTime getOrderCycleEnd() const;
  void setOrderCycleEnd (QDateTime orderCycleEnd);
  QDateTime getOrderCycleStart() const;
  void setOrderCycleStart (QDateTime orderCycleStart);
  qlonglong getOrderId() const;
  void setOrderId (qlonglong orderId);
  QString getPromFee() const;
  void setPromFee (QString promFee);
  QString getRefundFee() const;
  void setRefundFee (QString refundFee);
  QString getTotalPayFee() const;
  void setTotalPayFee (QString totalPayFee);
  
  virtual void parseResponse();

private:
/**
 * @brief 应用收费代码，从合作伙伴后台（my.open.taobao.com）-收费管理-收费项目列表 能够获得该应用的收费代码
 **/
  QString articleCode;

/**
 * @brief 商品模型名称
 **/
  QString articleItemName;

/**
 * @brief 应用名称
 **/
  QString articleName;

/**
 * @brief 订单号
 **/
  qlonglong bizOrderId;

/**
 * @brief 订单类型，1=新订 2=续订 3=升级 4=后台赠送 5=后台自动续订 6=订单审核后生成订购关系（暂时用不到）
 **/
  qlonglong bizType;

/**
 * @brief 订单创建时间（订购时间）
 **/
  QDateTime create;

/**
 * @brief 原价（单位为分）
 **/
  QString fee;

/**
 * @brief 收费项目代码，从合作伙伴后台（my.open.taobao.com）-收费管理-收费项目列表 能够获得收费项目代码
 **/
  QString itemCode;

/**
 * @brief 收费项目名称
 **/
  QString itemName;

/**
 * @brief 淘宝会员名
 **/
  QString nick;

/**
 * @brief 订购周期
 **/
  QString orderCycle;

/**
 * @brief 订购周期结束时间
 **/
  QDateTime orderCycleEnd;

/**
 * @brief 订购周期开始时间
 **/
  QDateTime orderCycleStart;

/**
 * @brief 子订单号
 **/
  qlonglong orderId;

/**
 * @brief 优惠（单位为分）
 **/
  QString promFee;

/**
 * @brief 退款（单位为分；升级时，系统会将升级前老版本按照剩余订购天数退还剩余金额）
 **/
  QString refundFee;

/**
 * @brief 实付（单位为分）
 **/
  QString totalPayFee;

};

#endif  /* ARTICLEBIZORDER_H */
