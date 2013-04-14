#ifndef WLBOUTINVENTORYCHANGENOTIFYRESPONSE_H
#define WLBOUTINVENTORYCHANGENOTIFYRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QDateTime>


/**
 * @brief TOP RESPONSE API: 拥有自有仓的企业物流用户通过该接口把自有仓的库存通知到物流宝，由物流宝维护该库存，控制前台显示库存的准确性。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WlbOutInventoryChangeNotifyResponse : public TaoResponse
{
public:
 virtual ~WlbOutInventoryChangeNotifyResponse() { }

  QDateTime getGmtModified() const;
  void setGmtModified (QDateTime gmtModified);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 库存变化通知成功时间
 **/
  QDateTime gmtModified;

};

#endif
