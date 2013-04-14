#ifndef FENXIAOGRADE_H
#define FENXIAOGRADE_H

#include <TaoApiCpp/TaoDomain.h>
#include <QDateTime>
#include <QString>


/**
 * @brief 分销商等级
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class FenxiaoGrade : public TaoDomain
{

public:
 virtual ~FenxiaoGrade() { }

  QDateTime getCreated() const;
  void setCreated (QDateTime created);
  qlonglong getGradeId() const;
  void setGradeId (qlonglong gradeId);
  QDateTime getModified() const;
  void setModified (QDateTime modified);
  QString getName() const;
  void setName (QString name);
  
  virtual void parseResponse();

private:
/**
 * @brief 记录创建时间
 **/
  QDateTime created;

/**
 * @brief 主键
 **/
  qlonglong gradeId;

/**
 * @brief 记录最后修改时间
 **/
  QDateTime modified;

/**
 * @brief 分销商等级名称
 **/
  QString name;

};

#endif  /* FENXIAOGRADE_H */
