#ifndef WLBITEMSYNCHRONIZERESPONSE_H
#define WLBITEMSYNCHRONIZERESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QDateTime>


/**
 * @brief TOP RESPONSE API: 同步仓储商品与前台商品，建立仓储商品与前台商品的关系,并更新IC中的信息到仓储商品Item中
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WlbItemSynchronizeResponse : public TaoResponse
{
public:
 virtual ~WlbItemSynchronizeResponse() { }

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
