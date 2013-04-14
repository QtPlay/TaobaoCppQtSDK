#ifndef SIMBACREATIVEIDSDELETEDGETRESPONSE_H
#define SIMBACREATIVEIDSDELETEDGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>


/**
 * @brief TOP RESPONSE API: 获取删除的创意ID
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaCreativeidsDeletedGetResponse : public TaoResponse
{
public:
 virtual ~SimbaCreativeidsDeletedGetResponse() { }

  QList<qlonglong> getDeletedCreativeIds() const;
  void setDeletedCreativeIds (QList<qlonglong> deletedCreativeIds);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 创意ID列表
 **/
  QList<qlonglong> deletedCreativeIds;

};

#endif
