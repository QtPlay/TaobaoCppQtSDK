#ifndef SIMBACATMATCHIDSDELETEDGETRESPONSE_H
#define SIMBACATMATCHIDSDELETEDGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>


/**
 * @brief TOP RESPONSE API: 获取删除的类目出价ID
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaCatmatchidsDeletedGetResponse : public TaoResponse
{
public:
 virtual ~SimbaCatmatchidsDeletedGetResponse() { }

  QList<qlonglong> getDeletedCatmatchIds() const;
  void setDeletedCatmatchIds (QList<qlonglong> deletedCatmatchIds);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 类目出价ID列表
 **/
  QList<qlonglong> deletedCatmatchIds;

};

#endif
