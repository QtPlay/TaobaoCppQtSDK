#ifndef DEMOGRAPHIC_H
#define DEMOGRAPHIC_H

#include <TaoApiCpp/TaoDomain.h>
#include <QDateTime>
#include <QString>


/**
 * @brief 投放人群
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class Demographic : public TaoDomain
{

public:
 virtual ~Demographic() { }

  QDateTime getCreateTime() const;
  void setCreateTime (QDateTime createTime);
  qlonglong getGroupId() const;
  void setGroupId (qlonglong groupId);
  QString getGroupName() const;
  void setGroupName (QString groupName);
  qlonglong getId() const;
  void setId (qlonglong id);
  QDateTime getLastUpdateTime() const;
  void setLastUpdateTime (QDateTime lastUpdateTime);
  QString getName() const;
  void setName (QString name);
  
  virtual void parseResponse();

private:
/**
 * @brief 创建时间
 **/
  QDateTime createTime;

/**
 * @brief 投放人群所属的组ID
 **/
  qlonglong groupId;

/**
 * @brief 投放人群所属组的组名
 **/
  QString groupName;

/**
 * @brief 投放人群ID
 **/
  qlonglong id;

/**
 * @brief 最后修改时间
 **/
  QDateTime lastUpdateTime;

/**
 * @brief 投放人群名称
 **/
  QString name;

};

#endif  /* DEMOGRAPHIC_H */
