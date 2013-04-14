#ifndef WLBINVENTORYSYNCRESPONSE_H
#define WLBINVENTORYSYNCRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QDateTime>


/**
 * @brief TOP RESPONSE API: 将库存同步至IC
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WlbInventorySyncResponse : public TaoResponse
{
public:
 virtual ~WlbInventorySyncResponse() { }

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
