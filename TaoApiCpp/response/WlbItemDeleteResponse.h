#ifndef WLBITEMDELETERESPONSE_H
#define WLBITEMDELETERESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QDateTime>


/**
 * @brief TOP RESPONSE API: 通过ItemId,UserId来删除单个商品
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WlbItemDeleteResponse : public TaoResponse
{
public:
 virtual ~WlbItemDeleteResponse() { }

  QDateTime getGmtModified() const;
  void setGmtModified (QDateTime gmtModified);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 修改时间
 **/
  QDateTime gmtModified;

};

#endif
