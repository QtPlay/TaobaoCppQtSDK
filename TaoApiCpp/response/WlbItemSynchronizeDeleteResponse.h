#ifndef WLBITEMSYNCHRONIZEDELETERESPONSE_H
#define WLBITEMSYNCHRONIZEDELETERESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QDateTime>


/**
 * @brief TOP RESPONSE API: 通过物流宝商品ID和IC商品ID删除映射关系。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WlbItemSynchronizeDeleteResponse : public TaoResponse
{
public:
 virtual ~WlbItemSynchronizeDeleteResponse() { }

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
