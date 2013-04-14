#ifndef SIMBACATMATCHIDSCHANGEDGETRESPONSE_H
#define SIMBACATMATCHIDSCHANGEDGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>


/**
 * @brief TOP RESPONSE API: 获取更改过的类目出价ID
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaCatmatchidsChangedGetResponse : public TaoResponse
{
public:
 virtual ~SimbaCatmatchidsChangedGetResponse() { }

  QList<qlonglong> getChangedCatmatchIds() const;
  void setChangedCatmatchIds (QList<qlonglong> changedCatmatchIds);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 类目出价ID列表
 **/
  QList<qlonglong> changedCatmatchIds;

};

#endif
