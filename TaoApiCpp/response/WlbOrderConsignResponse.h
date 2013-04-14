#ifndef WLBORDERCONSIGNRESPONSE_H
#define WLBORDERCONSIGNRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QDateTime>


/**
 * @brief TOP RESPONSE API: 如果erp导入淘宝交易订单到物流宝，当物流宝订单已发货的时候，erp需要调用该接口来通知物流订单和淘宝交易订单已发货
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WlbOrderConsignResponse : public TaoResponse
{
public:
 virtual ~WlbOrderConsignResponse() { }

  QDateTime getModifyTime() const;
  void setModifyTime (QDateTime modifyTime);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 修改时间
 **/
  QDateTime modifyTime;

};

#endif
