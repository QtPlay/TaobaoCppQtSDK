#ifndef WLBITEMCONSIGNMENTDELETERESPONSE_H
#define WLBITEMCONSIGNMENTDELETERESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QDateTime>


/**
 * @brief TOP RESPONSE API: 删除商品的代销关系
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WlbItemConsignmentDeleteResponse : public TaoResponse
{
public:
 virtual ~WlbItemConsignmentDeleteResponse() { }

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
