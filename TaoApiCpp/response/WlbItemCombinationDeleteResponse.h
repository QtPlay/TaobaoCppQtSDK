#ifndef WLBITEMCOMBINATIONDELETERESPONSE_H
#define WLBITEMCOMBINATIONDELETERESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QDateTime>


/**
 * @brief TOP RESPONSE API: 删除商品组合关系
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WlbItemCombinationDeleteResponse : public TaoResponse
{
public:
 virtual ~WlbItemCombinationDeleteResponse() { }

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
