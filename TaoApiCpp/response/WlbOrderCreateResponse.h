#ifndef WLBORDERCREATERESPONSE_H
#define WLBORDERCREATERESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QDateTime>


/**
 * @brief TOP RESPONSE API: 创建物流宝订单，由外部ISV或者ERP，Elink，淘宝交易产生
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WlbOrderCreateResponse : public TaoResponse
{
public:
 virtual ~WlbOrderCreateResponse() { }

  QDateTime getCreateTime() const;
  void setCreateTime (QDateTime createTime);  QString getOrderCode() const;
  void setOrderCode (QString orderCode);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 订单创建时间
 **/
  QDateTime createTime;

/**
 * @brief 物流宝订单创建成功后，返回物流宝的订单编号；如果订单创建失败，该字段为空。
 **/
  QString orderCode;

};

#endif
