#ifndef TASK_H
#define TASK_H

#include <TaoApiCpp/TaoDomain.h>
#include <QDateTime>
#include <QList>
#include <QString>
#include <TaoApiCpp/domain/Subtask.h>


/**
 * @brief 批量异步任务结果
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class Task : public TaoDomain
{

public:
 virtual ~Task() { }

  QString getCheckCode() const;
  void setCheckCode (QString checkCode);
  QDateTime getCreated() const;
  void setCreated (QDateTime created);
  QString getDownloadUrl() const;
  void setDownloadUrl (QString downloadUrl);
  QString getMethod() const;
  void setMethod (QString method);
  QDateTime getSchedule() const;
  void setSchedule (QDateTime schedule);
  QString getStatus() const;
  void setStatus (QString status);
  QList<Subtask> getSubtasks() const;
  void setSubtasks (QList<Subtask> subtasks);
  qlonglong getTaskId() const;
  void setTaskId (qlonglong taskId);
  
  virtual void parseResponse();

private:
/**
 * @brief 下载文件的MD5校验码，通过此校验码可以检查下载的文件是否是完整的。
 **/
  QString checkCode;

/**
 * @brief 任务创建时间
 **/
  QDateTime created;

/**
 * @brief 大任务结果下载地址。当创建的认任务是大数据量的任务时，获取结果会返回此字段，同时subtasks列表会为空。
通过这个地址可以下载到结果的结构体，格式同普通任务下载的一样。
每次获取到的地址只能下载一次。下载的文件加上后缀名.zip打开。
 **/
  QString downloadUrl;

/**
 * @brief 此任务是由哪个api产生的
 **/
  QString method;

/**
 * @brief 定时类型任务的执行时间点
 **/
  QDateTime schedule;

/**
 * @brief 异步任务处理状态。new（还未开始处理），doing（处理中），done（处理结束）。
 **/
  QString status;

/**
 * @brief 子任务处理结果，如果任务还没有处理完，返回的结果列表为空。如果任务处理完毕，返回子任务结果列表
 **/
  QList<Subtask> subtasks;

/**
 * @brief 异步任务id。创建异步任务时返回的任务id号
 **/
  qlonglong taskId;

};

#endif  /* TASK_H */
