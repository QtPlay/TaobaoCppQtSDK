#ifndef WLBITEMAUTHORIZATIONDELETERESPONSE_H
#define WLBITEMAUTHORIZATIONDELETERESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QDateTime>


/**
 * @brief TOP RESPONSE API: 删除授权关系.若有建立代销关系，会将其代销关系冻结即将状态置为失效(代销关系)。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WlbItemAuthorizationDeleteResponse : public TaoResponse
{
public:
 virtual ~WlbItemAuthorizationDeleteResponse() { }

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
