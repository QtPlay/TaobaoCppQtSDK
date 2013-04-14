#ifndef WLBORDERCANCELRESPONSE_H
#define WLBORDERCANCELRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QDateTime>


/**
 * @brief TOP RESPONSE API: 取消物流宝订单
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WlbOrderCancelResponse : public TaoResponse
{
public:
 virtual ~WlbOrderCancelResponse() { }

  QString getErrorCodeList() const;
  void setErrorCodeList (QString errorCodeList);  QDateTime getModifyTime() const;
  void setModifyTime (QDateTime modifyTime);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 错误编码列表
 **/
  QString errorCodeList;

/**
 * @brief 修改时间，只有在取消成功的情况下，才可以做
 **/
  QDateTime modifyTime;

};

#endif
