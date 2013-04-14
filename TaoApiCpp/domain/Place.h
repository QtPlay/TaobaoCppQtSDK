#ifndef PLACE_H
#define PLACE_H

#include <TaoApiCpp/TaoDomain.h>
#include <QDateTime>
#include <QString>


/**
 * @brief 定向推广位置
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class Place : public TaoDomain
{

public:
 virtual ~Place() { }

  QDateTime getCreateTime() const;
  void setCreateTime (QDateTime createTime);
  QDateTime getLastUpdateTime() const;
  void setLastUpdateTime (QDateTime lastUpdateTime);
  QString getName() const;
  void setName (QString name);
  qlonglong getPlaceId() const;
  void setPlaceId (qlonglong placeId);
  
  virtual void parseResponse();

private:
/**
 * @brief 创建时间
 **/
  QDateTime createTime;

/**
 * @brief 最后修改时间
 **/
  QDateTime lastUpdateTime;

/**
 * @brief 位置名称
 **/
  QString name;

/**
 * @brief 位置标识
 **/
  qlonglong placeId;

};

#endif  /* PLACE_H */
