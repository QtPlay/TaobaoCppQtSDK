#ifndef WLBITEMUPDATERESPONSE_H
#define WLBITEMUPDATERESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QDateTime>


/**
 * @brief TOP RESPONSE API: 修改物流宝商品信息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WlbItemUpdateResponse : public TaoResponse
{
public:
 virtual ~WlbItemUpdateResponse() { }

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
